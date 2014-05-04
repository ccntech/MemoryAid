//
//  DetailViewController.h
//  MemoryAid
//
//  Created by Peng fei Xu on 2014-05-03.
//  Copyright (c) 2014 CCN Technology. All rights reserved.
//

#import <UIKit/UIKit.h>
@class ItemDto;

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) ItemDto *detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
