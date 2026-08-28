#!/bin/bash

# Garante que o diretório de saída existe
mkdir -p bin

# Varre todos os arquivos .c dentro da pasta src
for file in src/*.c; do
    # Garante que o arquivo existe antes de compilar
    [ -e "$file" ] || continue

    # Obtém o nome base sem caminho e sem extensão
    filename=$(basename "$file" .c)

    # Compila com símbolos de debug (-g) e AddressSanitizer (-fsanitize=address)
    gcc -g -fsanitize=address "$file" -o "bin/$filename"

    echo "✅ Compilado com sucesso: bin/$filename"
done