//
//  StudentClassSelectViewController.m
//  Eduber
//
//  Created by Huy Pham on 08/01/15.
//  Copyright (c) 2015 RTH. All rights reserved.
//

#import "StudentClassSelectViewController.h"

@interface StudentClassSelectViewController ()

@end

@implementation StudentClassSelectViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    // Do any additional setup after loading the view.
    [self setupView];
}


-(void)viewWillAppear:(BOOL)animated{
    [self setTitle:@"Subjects"];
}

-(void)setupView{
    
    //scrollView
    self.automaticallyAdjustsScrollViewInsets = NO;
    self.scrollView.contentInset = UIEdgeInsetsMake(0,0,0,0);
    self.scrollviewWidth.constant = self.view.bounds.size.width - 2 * self.scrollviewSidePadding.constant;
    
    //Status view
    UIView* view = [[UIView alloc]initWithFrame:CGRectMake(0, 0, self.view.bounds.size.width, 20.0)];
    view.backgroundColor= [UIColor colorWithRed:234.0/255.0f green:76.0/255.0f blue:137.0/255.0f alpha:1.0];
    [self.view addSubview:view];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

-(IBAction)toeicAction:(id)sender{

}
@end
