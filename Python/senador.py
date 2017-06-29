#!/usr/bin/env python
# -*- coding: utf-8 -*-

import json, requests

url = 'http://meucongressonacional.com/api/001/senador/4981'

resposta = requests.get(url)
objeto_json = json.loads(resposta.text)

print(objeto_json)
