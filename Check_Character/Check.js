/*
    Author : Pakshal Shashikant Jain
    Date : 19/07/2023
    Prorgam : Accept Character from user and check whether it is alphabet or not
              (A-Z a-z).
              Input : F
              Output : TRUE
                
              Input : &
              Output : FALSE
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Class Declaration
var Character = /** @class */ (function () {
    //Constructor of Class
    function Character() {
        this.ch = ' ';
    }
    //Behaviour of Class To Class To Take Input
    Character.prototype.Accept = function () {
        this.ch = 'z';
    };
    //Behaviour of Class To Check Entered Character is alphabet or Not
    Character.prototype.Check = function () {
        if ((this.ch >= 'A') && (this.ch <= 'Z') || (this.ch >= 'a') && (this.ch <= 'z')) {
            return true;
        }
        else {
            return false;
        }
    };
    return Character;
}());
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main function
function main() {
    var bret = false;
    console.log("Jay Ganesh.....");
    //Creating object of Character Class
    var cobj = new Character();
    //Call To Behaviours of Class
    cobj.Accept();
    bret = cobj.Check();
    //Handeling Conditions According To Output
    if (bret == true) {
        console.log("Entered Character %s is An Alphabet", cobj.ch);
    }
    else {
        console.log("Entered Character %s is Not An Alphabet", cobj.ch);
    }
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Call To Main function
main();
