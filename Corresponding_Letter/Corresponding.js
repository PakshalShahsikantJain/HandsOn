/*
    Author : Pakshal Shashikant Jain
    Date : 31/07/2023
    Program : Accept character from user. If character is small display its
              corresponding capital character, and if it small then display its
              corresponding capital. In other cases display as it is.

              Input : Q
              Output : q

              Input : m
              Output : M

              Input : 4
              Output : 4

              Input : %
              Output : %
*/
//Function To Convert Character To Corresponding Letter
function Corresponding(ch) {
    var ascii = 0;
    //Logic 
    if ((ch >= 'A') && (ch <= 'Z')) {
        ascii = ch.charCodeAt() + 32;
        return String.fromCharCode(ascii);
    }
    else if ((ch >= 'a') && (ch <= 'z')) {
        ascii = ch.charCodeAt() - 32;
        return String.fromCharCode(ascii);
    }
    else {
        return ch;
    }
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main function
function main() {
    var ch = '%';
    var cret = ' ';
    console.log("Jay Ganesh......");
    //Call To Corresponding Function
    cret = Corresponding(ch);
    //Handeling Conditions According To Output 
    if ((ch >= 'A') && (ch <= 'Z')) {
        console.log("Corresponding Small Letter of Entered Capital Letter %s is : %s", ch, cret);
    }
    else if ((ch >= 'a') && (ch <= 'z')) {
        console.log("Corresponding Capital Letter of Entered Small Letter %s is : %s", ch, cret);
    }
    else {
        console.log("There is No Corresponding Letter of Entered Character %s", cret);
    }
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//call To main function
main();
