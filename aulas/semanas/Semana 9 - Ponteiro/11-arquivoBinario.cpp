arquivo.write((const char *)(&variavel), sizeof(tipo_dado_variavel));

arquivo.read(reinterpret_cast<char *>(&variavel), sizeof(tipo_dado_variavel));