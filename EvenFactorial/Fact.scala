/*
    Author : Pakshal Jain
    Date : 17/12/2022
    Program : To Calculate Even Factorial of Entered Number
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import scala.io.StdIn.*;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration with Constructor of Class
class EvenFact(var No : Int) {
    //Characteristics of Class
    var i : Int = 0;
    var Fact : Int = 1;

    //Behaviour of Class
    def Calculate() : Int = {
        //Handeling Condtion if Entered Number is Negative
        if(this.No < 0) {
            this.No = -this.No;
        }

        //logic
        for(i <- this.No to 1 by -1) {
            if(i % 2 == 0) {
                Fact = Fact * i;
            }
        }

        return Fact;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main object
object Fact {
    //Main Function
    def main(args : Array[String]) = {
        var No : Int = 0;
        var iret : Int = 0;

        println("Jay ganesh...");

        //Taking input From user
        println("Enter One NUmber You Want Factorial of");
        No = readInt();

        //Creating object of EvenFact Class
        var eobj = new EvenFact(No);
        //Call To Behaviour of Class
        iret = eobj.Calculate();

        //Printing Obtained Output
        println("Even Factorial of Entered Number is : "+iret); 
    }
}