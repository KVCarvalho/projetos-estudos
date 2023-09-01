class CardNews extends HTMLElement{
    constructor(){
        super();
        const shadow = this.attachShadow({mode: "open"}); //Salvando shadow DOM em uma constante
        shadow.appendChild(this.build());//Adição de HTML
        shadow.appendChild(this.styles());
    }
    build(){/*Desenvolver tags HTML*/
        //Criação do objeto raíz a qual será retornado no final
        const root = document.createElement("div");//Criando tag e salvando em uma constante JS
        root.setAttribute("class", "card"); //Adicionando atributo (classe)
        

        const cardLeft = document.createElement("div");
        cardLeft.setAttribute("class", "card__left")
        
        const cardRight = document.createElement("div");
        cardRight.setAttribute("class", "card__right");
        

        const autor = document.createElement("span");
        const title = document.createElement("a");
        const news = document.createElement("p");

        const imgNews = document.createElement("img");

        root.appendChild(cardLeft); //Comando para desenvolvimento de árvore/lista,
        root.appendChild(cardRight); //aqui é pra internalizar uma div na outra

        cardLeft.appendChild(autor);
        cardLeft.appendChild(title);
        cardLeft.appendChild(news);
        
        cardRight.appendChild(imgNews);

        autor.textContent = "By " + (this.getAttribute("autor") || "Anonymous");//Alterando o texto interno do objeto(autor)
        title.textContent = this.getAttribute("title");
        news.textContent = this.getAttribute("short");
        imgNews.src = this.getAttribute("photo");
        imgNews.setAttribute("class", "imgcard")

        return root;
        // https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/pokemon/other/dream-world/392.svg
    }
   styles(){
    const styl = document.createElement("style");
    styl.textContent = `
        .card {
          width: 80%;
          box-shadow: 9px 9px 27px 0px rgba(0, 0, 0, 0.75);
          -webkit-box-shadow: 9px 9px 27px 0px rgba(0, 0, 0, 0.75);
          -moz-box-shadow: 9px 9px 27px 0px rgba(0, 0, 0, 0.75);
          display: flex;
          flex-direction: row;
          justify-content: space-between;
        }
        
        .card__left {
          display: flex;
          flex-direction: column;
          justify-content: center;
          padding-left: 10px;
        }
        
        .card__left > span {
          font-weight: 400;
        }
        
        .card__left > a {
          margin-top: 15px;
          font-size: 25px;
          color: black;
          text-decoration: none;
          font-weight: bold;
        }
        
        .card__left > p {
          color: rgb(70, 70, 70);
        }
        .imgcard{
            height: 200px;
        }`
    return styl;
   }
}

customElements.define("card-news", CardNews);