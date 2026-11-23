import tkinter as tk
from tkinter import ttk, messagebox
import database

def listar_itens():
    for item in tabela.get_children():
        tabela.delete(item)
    itens = database.listar_itens()
    for item in itens:
        # formata preço e subtotal com 2 casas decimais
        item_formatado = list(item)
        item_formatado[4] = f"{item[4]:.2f}"
        item_formatado[6] = f"{item[6]:.2f}"
        tabela.insert("", tk.END, values=item_formatado)

def limpar_campos():
    entrada_pedido_id.delete(0, tk.END)
    entrada_produto_id.delete(0, tk.END)
    entrada_nome_produto.delete(0, tk.END)
    entrada_preco.delete(0, tk.END)
    entrada_quantidade.delete(0, tk.END)
    tabela.selection_remove(tabela.selection())

def cadastrar_item():
    pedido_id = entrada_pedido_id.get().strip()
    produto_id = entrada_produto_id.get().strip()
    nome_produto = entrada_nome_produto.get().strip()
    preco = entrada_preco.get().strip()
    quantidade = entrada_quantidade.get().strip()

    if not pedido_id or not produto_id or not nome_produto or not preco or not quantidade:
        messagebox.showerror("Erro", "Todos os campos devem ser preenchidos.")
        return

    try:
        pedido_id = int(pedido_id)
        produto_id = int(produto_id)
        preco = float(preco)
        quantidade = int(quantidade)
        if preco < 0 or quantidade <= 0:
            messagebox.showerror("Erro", "Preço deve ser >= 0 e quantidade deve ser > 0.")
            return
    except ValueError:
        messagebox.showerror(
            "Erro",
            "Pedido ID e Produto ID devem ser inteiros.\n"
            "Preço deve ser um número válido e quantidade deve ser um número inteiro."
        )
        return

    database.cadastrar_item(pedido_id, produto_id, nome_produto, preco, quantidade)
    limpar_campos()
    listar_itens()

def selecionar_item(event):
    item_selecionado = tabela.selection()
    if not item_selecionado:
        return
    dados = tabela.item(item_selecionado[0], 'values')
    # ordem: [0]=id, [1]=pedido_id, [2]=produto_id, [3]=nome, [4]=preco, [5]=qtd, [6]=subtotal
    entrada_pedido_id.delete(0, tk.END)
    entrada_pedido_id.insert(0, dados[1])
    entrada_produto_id.delete(0, tk.END)
    entrada_produto_id.insert(0, dados[2])
    entrada_nome_produto.delete(0, tk.END)
    entrada_nome_produto.insert(0, dados[3])
    entrada_preco.delete(0, tk.END)
    entrada_preco.insert(0, dados[4])
    entrada_quantidade.delete(0, tk.END)
    entrada_quantidade.insert(0, dados[5])

def atualizar_item():
    item_selecionado = tabela.selection()
    if not item_selecionado:
        messagebox.showerror("Erro", "Selecione um item para atualizar.")
        return

    id_item = tabela.item(item_selecionado[0], 'values')[0]

    pedido_id = entrada_pedido_id.get().strip()
    produto_id = entrada_produto_id.get().strip()
    nome_produto = entrada_nome_produto.get().strip()
    preco = entrada_preco.get().strip()
    quantidade = entrada_quantidade.get().strip()

    if not pedido_id or not produto_id or not nome_produto or not preco or not quantidade:
        messagebox.showerror("Erro", "Todos os campos devem ser preenchidos.")
        return

    try:
        pedido_id = int(pedido_id)
        produto_id = int(produto_id)
        preco = float(preco)
        quantidade = int(quantidade)
        if preco < 0 or quantidade <= 0:
            messagebox.showerror("Erro", "Preço deve ser >= 0 e quantidade deve ser > 0.")
            return
    except ValueError:
        messagebox.showerror(
            "Erro",
            "Pedido ID e Produto ID devem ser inteiros.\n"
            "Preço deve ser um número válido e quantidade deve ser um número inteiro."
        )
        return

    database.atualizar_item(id_item, pedido_id, produto_id, nome_produto, preco, quantidade)
    limpar_campos()
    listar_itens()

def excluir_item():
    item_selecionado = tabela.selection()
    if not item_selecionado:
        messagebox.showerror("Erro", "Selecione um item para excluir.")
        return
    id_item = tabela.item(item_selecionado[0], 'values')[0]
    database.excluir_item(id_item)
    limpar_campos()
    listar_itens()

janela = tk.Tk()

janela.title("Cadastro de Itens de Pedido")
janela.geometry("740x520")

tk.Label(janela, text="Pedido ID:").grid(row=0, column=0, padx=5, pady=5)
entrada_pedido_id = tk.Entry(janela)
entrada_pedido_id.grid(row=0, column=1, padx=5, pady=5)

tk.Label(janela, text="Produto ID:").grid(row=1, column=0, padx=5, pady=5)
entrada_produto_id = tk.Entry(janela)
entrada_produto_id.grid(row=1, column=1, padx=5, pady=5)

tk.Label(janela, text="Nome do Produto:").grid(row=2, column=0, padx=5, pady=5)
entrada_nome_produto = tk.Entry(janela, width=30)
entrada_nome_produto.grid(row=2, column=1, padx=5, pady=5)

tk.Label(janela, text="Preço Unitário:").grid(row=3, column=0, padx=5, pady=5)
entrada_preco = tk.Entry(janela)
entrada_preco.grid(row=3, column=1, padx=5, pady=5)

tk.Label(janela, text="Quantidade:").grid(row=4, column=0, padx=5, pady=5)
entrada_quantidade = tk.Entry(janela)
entrada_quantidade.grid(row=4, column=1, padx=5, pady=5)

frame_botoes = tk.Frame(janela)
frame_botoes.grid(row=5, column=0, columnspan=2, pady=10)

tk.Button(frame_botoes, text="Cadastrar", command=cadastrar_item).pack(side=tk.LEFT, padx=5)
tk.Button(frame_botoes, text="Atualizar", command=atualizar_item).pack(side=tk.LEFT, padx=5)
tk.Button(frame_botoes, text="Excluir", command=excluir_item).pack(side=tk.LEFT, padx=5)
tk.Button(frame_botoes, text="Limpar Campos", command=limpar_campos).pack(side=tk.LEFT, padx=5)

colunas = ("ID", "Pedido", "Produto ID", "Nome Produto", "Preço Unit.", "Qtd", "Subtotal")
tabela = ttk.Treeview(janela, columns=colunas, show="headings", height=12)

tabela.heading("ID", text="ID")
tabela.heading("Pedido", text="Pedido")
tabela.heading("Produto ID", text="Produto ID")
tabela.heading("Nome Produto", text="Nome Produto")
tabela.heading("Preço Unit.", text="Preço Unit.")
tabela.heading("Qtd", text="Qtd")
tabela.heading("Subtotal", text="Subtotal")

tabela.column("ID", width=50, anchor=tk.CENTER)
tabela.column("Pedido", width=70, anchor=tk.CENTER)
tabela.column("Produto ID", width=90, anchor=tk.CENTER)
tabela.column("Nome Produto", width=200, anchor=tk.W)
tabela.column("Preço Unit.", width=100, anchor=tk.E)
tabela.column("Qtd", width=60, anchor=tk.CENTER)
tabela.column("Subtotal", width=100, anchor=tk.E)

tabela.grid(row=6, column=0, columnspan=2, padx=10, pady=10)

tabela.bind("<<TreeviewSelect>>", selecionar_item)

database.criar_tabela()
listar_itens()

janela.mainloop()