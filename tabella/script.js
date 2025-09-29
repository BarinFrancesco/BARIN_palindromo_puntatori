function color(){
    let lettere = `0123456789abcdef`
    let colore =`#`;

    for(let i=0; i<6; i++){
        colore+= lettere[Math.floor(Math.random()*16)]
    }
    return colore;
}

function tabella(){

    
    const tabella = document.createElement(`table`);
    
    document.getElementById("content").innerHTML="";
    let righe = document.getElementById("righe");
    let crea_righe;
    let colonne = document.getElementById("colonne");
    let crea_colonne;
    let riempi_colonne;
    
    for(let i=0; i<righe.value; i++){
        
        crea_righe = document.createElement("tr")

        for(let x=0; x<colonne.value; x++){
            let chose_color= color()
            crea_colonne = document.createElement("td");
            crea_colonne.style.backgroundColor = chose_color
            crea_colonne.style.color = chose_color
            riempi_colonne = document.createTextNode("xxxx");
            crea_colonne.appendChild(riempi_colonne);
            crea_righe.appendChild(crea_colonne) 
        }
        
        tabella.appendChild(crea_righe);

        }

    document.getElementById("content").appendChild(tabella);
}