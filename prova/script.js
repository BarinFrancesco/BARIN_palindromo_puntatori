function cifra(){
    let str = document.getElementById("codice").value;
    let i, lunghezza;
    let cifra, bit;
    let tot=0;

    i=0;
    lunghezza = str.leng;
    tot=0;
    for (i; i<lunghezza; i++){

        cifra = parseInt(str[i]);

           if (i%2==0){
            cifra = cifra*1;
            } else{
                cifra = cifra*3;
           }

       tot = tot+cifra;
       console.log(tot);
    }
    
    bit = 100-tot;

    document.getElementById("risposta").innerHTML = `il bit significativo è ${bit}`;
}