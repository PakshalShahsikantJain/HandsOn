/*
    Author : Pakshal Jain
    Date : 17/01/2023
    Program : To Calculate Differnce Between Even And Odd Factorial of Entered Number
*/

//Required Libraries
import scala.io.StdIn.*;

//Main Object of Class
object Diff 
{
    //Function To Calculate Difference
    def Difference(No : Int) : Int = {
        var EvenFact : Int = 1;
        var OddFact : Int = 1;
        var i : Int = 0;
        var Diff : Int = 0;

        //Logic To Calculate Difference
        for(i <- No to 1 by -1) {
            if(i % 2 != 0) {
                OddFact = OddFact * i;
            } else {
                EvenFact = EvenFact * i;
            }
        }  

        //Calculating Difference
        Diff = EvenFact - OddFact;

        return Diff; 
    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    //Main Function
    def main(args : Array[String]) = {
        var No : Int = 0;
        var iret : Int = 0;

        println("Jay Ganesh....");
        
        //Taking Input From User
        println("Enter Number You Want");
        No = readInt();

        //Call To Difference Function
        iret = Difference(No);

        //Printing Obtained Output
        println("Difference Between Even and Odd Factorial is : "+iret);
    }
}