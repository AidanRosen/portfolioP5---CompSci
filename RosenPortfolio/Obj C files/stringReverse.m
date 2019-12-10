//
//  stringReverse.m
//  RosenPortfolio
//
//  Created by Rosen, Aidan on 12/3/19.
//  Copyright © 2019 Rosen, Aidan. All rights reserved.
//



#include "Palindrome.h"
#import "stringReverse.h"



@implementation stringController
@synthesize userInput, way1, way2, way3, way4;

- (IBAction)stringSwap:(id)sender {
    //double Hypotenusecalc = hypo(Leg1.text.doubleValue, Leg2.text.doubleValue);
    // part of the code that does all four ways, do both array swap and built in and recursive method
    way2.text = [NSString stringWithFormat:@" "];
    way3.text = [NSString stringWithFormat:@" "];
    way4.text = [NSString stringWithFormat:@" "];
    const char *cInput = [userInput.text UTF8String];
    long stringLength = userInput.text.length;
       // Method 1 - Array method
    
    way2.text = [NSString stringWithFormat:@"%s" , Palindrome((char*)cInput, stringLength)];
    way3.text = [NSString stringWithFormat:@"%s" , recursePalin((char*)cInput)];
    
    if (way2.text == userInput.text){
        way4.text = [NSString stringWithFormat: @"It is a palindrome"];
    } else {
        way4.text = [NSString stringWithFormat: @"It is not a palindrome"];
    }
}


    
@end
    
