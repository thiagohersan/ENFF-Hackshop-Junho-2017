#!/usr/bin/env python
# -*- coding: utf-8 -*-

import json, requests

url = 'http://meucongressonacional.com/api/001/senador/estado/go'

resposta = requests.get(url)
objeto_json = json.loads(resposta.text)

for senador in objeto_json:
    print(senador['nomeParlamentar']+"  "+str(senador['gastoTotal']))