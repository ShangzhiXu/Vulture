#define IS_OSPI_FUNCTIONAL_MODE(MODE) (((MODE) == OSPI_FUNCTIONAL_MODE_INDIRECT_WRITE) || \
                                       ((MODE) == OSPI_FUNCTIONAL_MODE_INDIRECT_READ)  || \
                                       ((MODE) == OSPI_FUNCTIONAL_MODE_AUTO_POLLING)   || \
                                       ((MODE) == OSPI_FUNCTIONAL_MODE_MEMORY_MAPPED))
