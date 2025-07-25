#include "../types/no-trie.type.h"
#include "../../../shared/types/registro.type.h"
#include "../../../shared/services/adicionar-registro-na-lista.service.h"
#include "../../../shared/services/relatorio-por-categoria/gerenciador-lista-estado.service.h"
#include "../../../shared/types/callbacks.h"
#include <string.h>

void coletar_maquinas_por_categoria_e_estado_trie(EstruturaDados estrutura_dados, const char *categoria_cod, GerenciadorListaEstados *gerenciador_estados_ref);