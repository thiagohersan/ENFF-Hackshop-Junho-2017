#!/usr/bin/env python
# -*- coding: utf-8 -*-

import json, requests

url = 'https://www.metaweather.com/api/location/search/'

parametros = {
  'query': 'São Paulo'
}

resposta = requests.get(url, parametros)
objeto_json = json.loads(resposta.text)

print(objeto_json)
