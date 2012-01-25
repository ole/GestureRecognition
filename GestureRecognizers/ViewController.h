//
//  ViewController.h
//  GestureRecognizers
//
//  Created by Ole Begemann on 24.01.12.
//  Copyright (c) 2012 Ole Begemann. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UIGestureRecognizerDelegate>

@property (weak, nonatomic) IBOutlet UIImageView *imageView;

@end
