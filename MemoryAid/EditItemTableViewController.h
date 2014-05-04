//
//  EditItemTableViewController.h
//  MemoryAid
//
//  Created by Peng fei Xu on 2014-05-03.
//  Copyright (c) 2014 CCN Technology. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ItemDto.h"

@protocol EditItemTableViewControllerDelegate;


@interface EditItemTableViewController : UITableViewController <UITextViewDelegate, UITextFieldDelegate>
@property (strong, nonatomic) IBOutlet UITextField *textFieldName;
@property (strong, nonatomic) IBOutlet UITextView *textViewDesc;

@property (strong, nonatomic) id<EditItemTableViewControllerDelegate> delegate;
@property (strong, nonatomic) ItemDto *itemDto;
- (IBAction)addItem:(id)sender;
@end

@protocol EditItemTableViewControllerDelegate <NSObject>

- (void) addItem:(ItemDto*)itemDto;

@optional
- (void) deleteItem;

@optional
- (void) updateItem;

@end