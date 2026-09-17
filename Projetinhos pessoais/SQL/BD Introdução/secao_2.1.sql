create database projeto1;
USE projeto1;
drop table clientes;

create table clientes(
    nome varchar(30),
    sexo char(1),
    email varchar(30),
    cpf varchar(11),
    tel varchar(30),
    ender varchar(30)
);

insert into clientes values
('Caua', 'M', 'cauaadriel2@gmail.com', '07033513208', '92985805195', 'Rua Argonauta'),
('Bruno', 'M', 'bruno.oliveira@gmail.com', '23456789012', '85991234567', 'Av. Brasil'),
('Carla', 'F', 'carla.martins@gmail.com', '34567890123', '11999887766', 'Rua do Sol'),
('Diego', 'M', 'diego.pereira@gmail.com', '45678901234', '2133445566', 'Rua da Lua'),
('Elaine', 'F', 'elaine.santos@gmail.com', '56789012345', '31988776655', 'Av. Paulista'),
('Fabio', 'M', 'fabio.ferreira@gmail.com', '67890123456', '47991234567', 'Rua da Praia'),
('Giovana', 'F', 'giovana.rodrigues@gmail.com', '78901234567', '51987651234', 'Rua do Campo'),
('Henrique', 'M', 'henrique.alves@gmail.com', '89012345678', '61999887766', 'Av. Central'),
('Isabela', 'F', 'isabela.costa@gmail.com', '90123456789', '71991234567', 'Rua dos Pinheiros');