import sqlite3

def criar_tabela():
    conexao = sqlite3.connect('pedidos.db')
    cursor = conexao.cursor()

    cursor.execute('''
    CREATE TABLE IF NOT EXISTS pedido_itens (
        id INTEGER PRIMARY KEY AUTOINCREMENT,
        pedido_id INTEGER NOT NULL,
        produto_id INTEGER NOT NULL,
        nome_produto TEXT NOT NULL,
        preco_unitario REAL NOT NULL,
        quantidade INTEGER NOT NULL,
        subtotal REAL NOT NULL
    )
    ''')

    conexao.commit()
    conexao.close()

#Cadastrar Item

def cadastrar_item(pedido_id, produto_id, nome_produto, preco_unitario, quantidade):
    subtotal = preco_unitario * quantidade
    conexao = sqlite3.connect('pedidos.db')
    cursor = conexao.cursor()

    cursor.execute('''
    INSERT INTO pedido_itens (pedido_id, produto_id, nome_produto, preco_unitario, quantidade, subtotal)
    VALUES (?, ?, ?, ?, ?, ?)
    ''', (pedido_id, produto_id, nome_produto, preco_unitario, quantidade, subtotal))

    conexao.commit()
    conexao.close()

#Listar Itens

def listar_itens():
    conexao = sqlite3.connect('pedidos.db')
    cursor = conexao.cursor()

    cursor.execute('SELECT * FROM pedido_itens ORDER BY id')
    itens = cursor.fetchall()

    conexao.close()
    return itens

#Atualizar Item

def atualizar_item(id_item, pedido_id, produto_id, nome_produto, preco_unitario, quantidade):
    subtotal = preco_unitario * quantidade
    conexao = sqlite3.connect('pedidos.db')
    cursor = conexao.cursor()

    cursor.execute('''
    UPDATE pedido_itens
    SET pedido_id = ?, produto_id = ?, nome_produto = ?,
        preco_unitario = ?, quantidade = ?, subtotal = ?
    WHERE id = ?
    ''', (pedido_id, produto_id, nome_produto, preco_unitario, quantidade, subtotal, id_item))

    conexao.commit()
    conexao.close()

#Excluir Item

def excluir_item(id_item):
    conexao = sqlite3.connect('pedidos.db')
    cursor = conexao.cursor()

    cursor.execute('DELETE FROM pedido_itens WHERE id = ?', (id_item,))

    conexao.commit()
    conexao.close()