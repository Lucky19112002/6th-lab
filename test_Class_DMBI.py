import pandas as pa


pa.Series([1,2,3,4,5,5])
asaa = pa.DataFrame({'product':['lappy','mouse','keyboar','printer','pendrive','cpu'],
             'price':[1000,120,1235,123,169,458],
             'Items':[123,145,142,42,66,12]})
paaa = asaa['price']
asaa['gst'] = [11,22,33,44,55,66]
asaa['total'] = asaa['price'] + asaa['gst']
asaa['grand_total'] = (asaa['price'] + asaa['gst'])*asaa['Items']
print(asaa)
#print(paaa)
