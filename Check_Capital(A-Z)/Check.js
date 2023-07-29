/*
    Author : Pakshal Shashikant Jain
    Date : 21/07/2023
    Prorgam : Accept Character from user and check whether it is capital or not(A-Z).
              Input : F
              Output : TRUE

              Input : d
              Output : FALSE
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Class Declaration
var Character = /** @class */ (function () {
    function Character() {
    }
    //Constructor of Class
    Character.prototype.construct = function () {
        this.ch = ' ';
    };
    //Behaviour of Class To Take Input from user
    Character.prototype.Accept = function () {
        this.ch = 'Z';
    };
    //Behaviour of Class To Check
    Character.prototype.check = function () {
        //Logic
        if ((this.ch >= 'A') && (this.ch <= 'Z')) {
            return true;
        }
        else {
            return false;
        }
    };
    return Character;
}());
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main function
function main() {
    var bret = false;
    console.log("Jay Ganesh.....");
    //Creating object of Character Class To Take input from user
    var cobj = new Character();
    //Call To Behaviour of Class
    cobj.Accept();
    bret = cobj.check();
    //Handeling Conditions according to output
    if (bret == true) {
        console.log("Entered Character %s is Capital", cobj.ch);
    }
    else {
        console.log("Entered Character %s is Not Capital", cobj.ch);
    }
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Call TO Main function
main();
