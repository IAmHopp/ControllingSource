//
//  DetailViewController.h
//  ControllingSource
//
//  Created by Bruno Santos on 7/29/14.
//  Copyright (c) 2014 Bruno Santos. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

