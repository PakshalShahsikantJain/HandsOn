/*
    Author : Pakshal Shshikant Jain
    Date : 30/09/2023
    Program : Write a program which accept string from user and copy the
              contents into another string by removing extra white spaces.
                
              Input : Marvellous        multi          OS”
              Output : Marvellous multi OS”

*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Class Declaration
var StringCopy = /** @class */ (function () {
    //Constructor of Class
    function StringCopy() {
        this.str = " ";
        this.arr = [];
        this.brr = [];
    }
    //Behaviour of Class To Take input from user
    StringCopy.prototype.Accept = function () {
        this.str = "Pakshal            Jain";
        this.arr = Array.from(this.str);
    };
    //Behaviour of Class To Copy String After Removing White Spaces
    StringCopy.prototype.StrCpyX = function () {
        var i = 0;
        var j = 0;
        if ((this.arr == null) && (this.brr == null)) {
            return;
        }
        //Logic To Copy String
        while (i != this.arr.length) {
            if (this.arr[i] == ' ') {
                while ((this.arr[i] == ' ') && (i != this.arr.length)) {
                    i++;
                }
                this.brr[j] = ' ';
                j++;
            }
            this.brr[j] = this.arr[i];
            j++;
            i++;
        }
    };
    return StringCopy;
}()); //End of Class
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    console.log("Jay Ganesh....");
    //Creating object of StringCpoy Class
    var sobj = new StringCopy();
    //Call To Behaviours of Class
    sobj.Accept();
    sobj.StrCpyX();
    //Printing Copied String
    console.log("Copied String is :", sobj.brr.join(""));
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Call To Main Function
main();
