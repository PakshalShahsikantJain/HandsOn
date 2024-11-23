/*
    Author : Pakshal Shashikant Jain
    Date : 15/07/2023
    Program : Accept N numbers from user and return product of all odd elements.
              Input : N : 6
                      Elements : 15 66 3 70 10 88
                      Output : 45
              Input : N : 6
                      Elements : 44 66 72 70 10 88
                      Output : 0
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Class Declaration
var OddElem = /** @class */ (function () {
    function OddElem() {
    }
    //Constructor of Class
    OddElem.prototype.construct = function () {
        this.i = 0;
        this.arr = [];
        this.isize = 0;
    };
    //Behaviour of Class To Intialize Value To Class Variables
    OddElem.prototype.Accept = function () {
        this.i = 0;
        this.arr = [44, 66, 72, 70, 10, 88];
        this.isize = 6;
    };
    //Behaviour of Class To Calculate Product
    OddElem.prototype.Product = function () {
        var imult = 1;
        //Logic 
        for (this.i = 0; this.i < this.isize; this.i++) {
            if ((this.arr[this.i] % 2) != 0) {
                imult = imult * this.arr[this.i];
            }
        }
        if (imult == 1) {
            imult = 0;
        }
        return imult;
    };
    return OddElem;
}());
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main function
function main() {
    var iret = 0;
    console.log("Jay Ganesh....");
    //Creating object of OddElements
    var obj = new OddElem();
    //Call To Behaviours of Class
    obj.Accept();
    iret = obj.Product();
    //Printing Product of Odd Elements 
    console.log("Product of Odd Elements of Entered Number is : ", iret);
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Main function
main();
