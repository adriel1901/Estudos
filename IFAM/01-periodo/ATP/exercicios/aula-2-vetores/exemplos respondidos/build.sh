#!/bin/bash

set -u

# Usa a pasta deste script como base, independentemente do diretório atual.
BASE_DIR="$(cd "$(dirname "$0")" && pwd)"

# Garante que o diretório de saída existe
mkdir -p "$BASE_DIR/bin"

# Varre todos os arquivos .c dentro da pasta src
for file in "$BASE_DIR"/src/*.c; do
    # Garante que o arquivo existe antes de compilar
    [ -e "$file" ] || continue

    # Obtém o nome base sem caminho e sem extensão
    filename=$(basename "$file" .c)

    # Compila com símbolos de debug (-g) e AddressSanitizer (-fsanitize=address)
    if gcc -g -fsanitize=address "$file" -o "$BASE_DIR/bin/$filename"; then
        printf 'Compilado com sucesso: %s\n' "$BASE_DIR/bin/$filename"
    else
        printf 'Falha ao compilar: %s\n' "$file" >&2
        exit 1
    fi
done