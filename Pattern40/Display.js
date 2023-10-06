/*
    Author : Pakshal Shashikant Jain
    Date : 05/10/2023
    Program : Input : "Marvellous"
              Output : M A R V E L L O U S
                       M A R V E L L O U S
                       M A R V E L L O U S
                       M A R V E L L O U S
                       M A R V E L L O U S
                       M A R V E L L O U S
                       M A R V E L L O U S
                       M A R V E L L O U S
                       M A R V E L L O U S
                       M A R V E L L O U S
                       
              Input : "PPA"
              Output : P P A
                       P P A
                       P P A
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Required libraries
function Pattern(arr) {
    var i = 0;
    var j = 0;
    var ascii = 0;
    //Printing Below Given Pattern
    console.log("Printing Given Pattern : ");
    for (i = 0; i < arr.length; i++) {
        for (j = 0; j < arr.length; j++) {
            if ((arr[j] >= 'a') && (arr[j] <= 'z')) {
                ascii = arr[j].charCodeAt() - 32;
                arr[j] = String.fromCharCode(ascii);
            }
            process.stdout.write(arr[j] + "\t");
        }
        console.log();
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    var str = "Pakshal";
    var arr = Array.from(str);
    console.log("Jay Ganesh.....");
    //Call To Pattern Function
    Pattern(arr);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Call To Main Function
main();
