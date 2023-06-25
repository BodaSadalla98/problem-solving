package com.company;

import java.io.File;

import java.util.List;
import  java.util.Scanner;




public class Main {


    public static void main(String[] args) throws Exception {
        // write your code here

        String[] movies = new String[26];

        File file = new File("a7a.txt");
        Scanner scanner = new Scanner(System.in);
        Scanner filescanner = new Scanner(file);
        int i = 0;
        while (filescanner.hasNextLine()) {

            String line = filescanner.nextLine();
            movies[i] = line;
            i++;

        }

        int filmNumber = (int) (Math.random() * 26);
        System.out.println(filmNumber);
        int movielength = movies[filmNumber].length();
        int counter = 0;
        char[] ans =new char[movielength];
        char[] m = movies[filmNumber].toCharArray();

        for (int j = 0; j < movielength; j++){
            if(m[j]==':'||m[j]==' ')ans[j]=m[j];
            else

            ans[j]='_';}

            boolean done=true;











        while (true) {
             done=true;
            for (int k=0;k<movielength;k++) {
            if(ans[k]=='_') done=false;

            }

            if(done){
                System.out.println("Congratz.. U won!!");
                System.out.println("U did it  with only "+counter+" Wrong guess(es)");
                break;
            }

            if(counter>=10){
                System.out.println("oh, Sorry it seems like u lost, Try again");
                System.out.println("The correct movie is : "+m);

                break;}
             boolean found=false;
            System.out.println("Guess a letter ,please...");
            char c = scanner.nextLine().charAt(0);
            for (int j = 0; j < movielength; j++) {
                if (c ==  Character.toLowerCase(m[j])) {
                   found=true;
                    ans[j]=m[j];

                }
            }

            if(found){

            System.out.println(ans);
            found=false;
            }
            else {
                counter++;
                System.out.println(ans);
                System.out.println("Wrong Guess.. u has " + (10-counter)+ " Guesses left..");
            }

        }
    }
}
