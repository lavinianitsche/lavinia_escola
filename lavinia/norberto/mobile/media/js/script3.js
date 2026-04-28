// vetores e contador declarados fora para preservar dados
const nomes = [];
const medias = [];
let contador = 0; // o "ponteiro" que indica a posição atual

function calcular() {
    
    // referencias e capturas
    const nome  = document.getElementById("nome");
    const tri_um = document.getElementById("notau");
    const tri_dois = document.getElementById("notad");
    const tri_tres = document.getElementById("notat");
    const resposta = document.getElementById("resposta");
    
    let t1 = parseFloat(tri_um.value) || 0; // parseFloat converte texto para numero real
    let t2 = parseFloat(tri_dois.value) || 0;
    let t3 = parseFloat(tri_tres.value) || 0;
    
    // calculo e atribuição classica
    // ao inves de push(), usamos o indice inteiro
    nomes[contador] = nome.value;
    medias[contador] = ((t1 + t2 + t3) / 3).toFixed(2);

    //incrementamos o contador para que o proximo aluno use a mesma posição
    contador++

    

    do { // inicio do.. while


        if (isNaN(t1) || isNaN(t2) || isNaN(t3)) {
            alert("por favor, preencha todas as notas corretamente!");
            return;
        }

        let media = (t1 + t2 + t3) / 3; // calculo da media

        let situacao = "";
        
        if (media >= 60) {
            situacao = "aprovado";
        } else {
            situacao = "reprovado";
        }

        // criar elemento de texto para exibir o resultado na tela
        const div_result = document.createElement("div");
        div_result.innerHTML = `<p><strong> aluno:</strong> ${name} | <strong>media:</strong> ${media.toFixed(2)} | <strong>resultado:</strong> ${situacao} </p>`; // interpolação
        document.body.appendChild(div_result);

        // verificar resposta s/n
        continuar = resposta.value.charAt(0).toLowerCase(); // charAt = pega primeiro caractere do texto

        // lógica de repetição: se for 's', limpamos os campos para o usuário digitar o próximo e o laço encerra sau volta atual.
        if (continuar === 's') { // tres iguais compara valor e tipo
            nome.value = "";
            tri_um.value = "";
            tri_dois.value = "";
            tri_tres.value = "";
            resposta.value = "";

            // dar o foco no nome para a próxima digitação
            nome.focus();
            break;
            // break é necessário aqui pois em ambiente web, o 'do.. while' não pode pausar a CPU esperando o usuário digitar
            // ele processa a entrada atual e libera para a próxima interação do botão
        }


    } while (continuar == 's');

    // copiar if (foto na galeria)
}