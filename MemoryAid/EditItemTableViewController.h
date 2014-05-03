//
//  EditItemTableViewController.h
//  MemoryAid
//
//  Created by Peng fei Xu on 2014-05-03.
//  Copyright (c) 2014 CCN Technology. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol EditItemTableViewControllerDelegate;


@interface EditItemTableViewController : UITableViewController

@property (strong, nonatomic) id<EditItemTableViewControllerDelegate> delegate;
@end

@protocol EditItemTableViewControllerDelegate <NSObject>

- (void) addItem;
- (void) deleteItem;
- (void) updateItem;

@end