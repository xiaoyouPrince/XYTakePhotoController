//
//  ViewController.m
//  XYTakePhotoController
//
//  Created by 渠晓友 on 2020/3/29.
//  Copyright © 2020 渠晓友. All rights reserved.
//

#import "ViewController.h"
#import "XYTakePhotoController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    
}


- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{
    XYTakePhotoController *vc = [XYTakePhotoController new];
    //    [self presentViewController:vc animated:YES completion:nil];
        [self.navigationController pushViewController:vc animated:YES];
}


@end
