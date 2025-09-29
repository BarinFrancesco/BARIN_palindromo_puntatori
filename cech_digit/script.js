function cifra_EAN(){
    let str = document.getElementById("codice").value;
    let tot=0;
    let bit=0;
    let valore;

    if(str.length<12){
        alert("C'è un'errore nei dati in input, il codice deve avere 12 valori");
        return;
    }

    for (let i=0; i< str.length;  i++){
        valore=parseInt(str[i]);
        if (isNaN(valore)){
            alert("Tutti i caratteri devono essere lettere");
            return;
        }
    }

    for (let index = 0; index < str.length; index++) {

        valore = parseInt(str[index]);
        
        if(index%2===0){
            valore=valore*1;
        }else{
            valore=valore*3;
        }
        
        tot += valore;

    }

    bit= ((Math.floor(tot/10)+1)*10)-tot;
    alert(`Il bit significativo è: ${bit}`);
    alert(`Codice completo ${str}${bit}`);
    document.getElementById("RISPOSTA").innerHTML = `Il bit significativo è: ${bit}`;
    document.getElementById("RISPOSTA_2").innerHTML =  `Codice completo ${str}${bit}`;
}

function cifra_ISBN(){
    let str = document.getElementById("codice").value;
    let tot=0;
    let bit=0;
    let valore;

    if(str.length<12){
        alert("C'è un'errore nei dati in input, il codice deve avere 12 valori");
        return;
    }

    for (let i=0; i< str.length;  i++){
        valore=parseInt(str[i]);
        if (isNaN(valore)){
            alert("Tutti i caratteri devono essere lettere");
            return;
        }
    }

    for (let index = 0; index < str.length; index++) {

        valore = parseInt(str[index]);
        
        if(index%2===0){
            valore=valore*1;
        }else{
            valore=valore*3;
        }
        
        tot += valore;

    }

    bit= ((Math.floor(tot/10)+1)*10)-tot;
    alert(`Il bit significativo è: ${bit}`);
    alert(`Codice completo ${str}${bit}`);
    document.getElementById("RISPOSTA").innerHTML = `Il bit significativo è: ${bit}`;
    document.getElementById("RISPOSTA_2").innerHTML =  `Codice completo ${str}${bit}`;
}