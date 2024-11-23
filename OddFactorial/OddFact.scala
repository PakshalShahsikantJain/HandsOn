/*
    Author : Pakshal Jain
    Date : 14/01/2023
    Program : To Calcualte OddFactorial of Entered Number
*/

//Required Libraries
import scala.io.StdIn.*;

//Class Declaration with Constructor of Class
class OddFact(var No : Int) {

    //Behaviour of Class
    def Calculate() : Int =   {
        var Fact : Int = 1;
        var i : Int = 0;

        if(No < 0) {
            No = -No;
        }

        //Logic TO Calculate Factorial
        for(i <- No to 0 by -1) {
            if(i % 2 != 0) {
                Fact = Fact * i;
            }
        }

        return Fact;
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////

//Main object 
object main {
    //Main Function
    def main(args : Array[String]) = 
    {
        var No : Int = 0;
        var iret : Int = 0;

        println("Jay Ganesh....");

        //Taking Input From User
        println("Enter One Number To Calculate Factorial of :");
        No = readInt();

        //Creating object of OddFact Class
        var obj = new OddFact(No);

        //Call To Behaviour of Class
        iret = obj.Calculate();

        //Print Obtained Output
        println("Odd Factorial of Entered Number is : "+iret);
    }
}