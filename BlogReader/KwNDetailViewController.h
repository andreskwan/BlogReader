//
//  KwNDetailViewController.h
//  BlogReader
//
//  Created by Andres Kwan on 3/21/14.
//  Copyright (c) 2014 Kwan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface KwNDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
