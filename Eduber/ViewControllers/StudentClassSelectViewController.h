//
//  StudentClassSelectViewController.h
//  Eduber
//
//  Created by Huy Pham on 08/01/15.
//  Copyright (c) 2015 RTH. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CustomNavigationBar.h"

@interface StudentClassSelectViewController : UIViewController


@property (strong, nonatomic) IBOutlet UIScrollView *scrollView;
@property (strong, nonatomic) IBOutlet NSLayoutConstraint *scrollviewWidth;
@property (strong, nonatomic) IBOutlet NSLayoutConstraint *scrollviewSidePadding;


-(IBAction)toeicAction:(id)sender;

@end
