/*
    Author : Pakshal Shashikant Jain
    Date : 26/09/2023
    Program : Write a program which accept string from user and reverse each
              word in place.
              
              Input : "Marvellous Multi OS
              Output : "suollevraM itluM SO"
*/
//Class Declaration
var StringWordRev = /** @class */ (function () {
    //Constructor of Class
    function StringWordRev() {
        this.str = " ";
        this.arr = [];
    }
    //Behaviour of Class To Take Input from user
    StringWordRev.prototype.Accept = function () {
        this.str = "Pakshal Shashikant Jain";
        this.arr = Array.from(this.str);
    };
    //Behaviour of Class To Reverse Each Word of String
    StringWordRev.prototype.StrWrdRev = function () {
        var first = 0;
        var last = 0;
        var i = 0;
        var j = 0;
        var temp = ' ';
        //Logic To Rverse Each Word of String in Place
        while (last != this.arr.length) {
            if (this.arr[last] == ' ') {
                while ((this.arr[last] == ' ') && (last != this.arr.length)) {
                    last++;
                }
                last--;
            }
            else {
                first = last;
                while ((this.arr[last] != ' ') && (last != this.arr.length)) {
                    last++;
                }
                if (this.arr[last] == ' ') {
                    last--;
                }
                i = first;
                j = last;
                while (i <= j) {
                    temp = this.arr[i];
                    this.arr[i] = this.arr[j];
                    this.arr[j] = temp;
                    i++;
                    j--;
                }
            }
            last++;
        }
    };
    return StringWordRev;
}());
////////////////////////////////////////////////////////////////////////////////////////////////
//Main Function
function main() {
    console.log("Jay Ganesh...");
    //Creating object of StirngWordRev Class
    var sobj = new StringWordRev();
    //Call To Behaviours of Class
    sobj.Accept();
    sobj.StrWrdRev();
    console.log("String After Reversing Word is : " + sobj.arr.join(''));
}
//////////////////////////////////////////////////////////////////////////////////////////////
//Call To Main Function
main();
