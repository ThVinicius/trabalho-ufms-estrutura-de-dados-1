#include <string.h>
#include "../types/no-avl.type.h"
#include "../../../shared/types/registro.type.h"
#include "../../../shared/services/adicionar-registro-na-lista.service.h"
#include "../../../shared/types/callbacks.h"

void coletar_maquinas_por_responsavel_e_status_avl(EstruturaDados estrutura_dados, const char *cpf_cnpj, GerenciadorListaRegistro *ativas_gerenciador, GerenciadorListaRegistro *inativas_gerenciador);
