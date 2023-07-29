/*
    Author : Pakshal Shashikant Jain
    Date : 30/07/2023
    Program : Accept Character from user and check whether it is small case or
              not (a-z).

              Input : g
              Output : TRUE

              Input : D
              Output : FALSE
*/
//Class Declaration
var Character = /** @class */ (function () {
    //Constructor of Class
    function Character() {
        this.ch = ' ';
    }
    //Behaviour of Class To Take Initialize Value
    Character.prototype.Accept = function () {
        this.ch = 'H';
    };
    //Behaviour of Class To Check Entered Character is Small Case Character or Not
    Character.prototype.Check = function () {
        if ((this.ch >= 'a') && (this.ch <= 'z')) {
            return true;
        }
        else {
            return false;
        }
    };
    return Character;
}());
//main function
function main() {
    var bret = false;
    console.log("Jay Ganesh.....");
    //Creating object of Character Class
    var cobj = new Character();
    //Call To Behaviour of Class
    cobj.Accept();
    bret = cobj.Check();
    //Handleing Conditions 
    if (bret == true) {
        console.log("Entered Character %s is Small Case Character", cobj.ch);
    }
    else {
        console.log("Entered Character %s is Not Small Case Character", cobj.ch);
    }
}
//Call To Main function
main();
