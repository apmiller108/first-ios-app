//
//  DetailViewController.h
//  First iOS App
//
//  Created by alex miller on 12/7/15.
//  Copyright © 2015 alex miller. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

