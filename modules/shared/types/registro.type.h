#ifndef TYPES_H
#define TYPES_H

typedef enum
{
    INATIVO = 0,
    ATIVO = 1
} RegistroStatusEnum;

typedef struct
{
    char renamaut[17];
    char fab[5];
    char mod[51];
    char cat[7];
    char apl[4];
    int ano;
    char resp[15];
    char cidade[51];
    char uf[3];
    RegistroStatusEnum status;
} Registro;

typedef struct ListaRegistro
{
    Registro registro;
    struct ListaRegistro *next;
} ListaRegistro;

typedef struct
{
    ListaRegistro *head;
    ListaRegistro *tail;
} GerenciadorListaRegistro;

typedef struct NoEstadoRelatorioCategoria
{
    char uf[3];
    GerenciadorListaRegistro maquinas_no_estado;
    struct NoEstadoRelatorioCategoria *prox;
} NoEstadoRelatorioCategoria;

typedef struct GerenciadorListaEstados
{
    NoEstadoRelatorioCategoria *head;
    NoEstadoRelatorioCategoria *tail;
} GerenciadorListaEstados;

#endif