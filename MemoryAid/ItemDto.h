//
//  ItemDto.h
//  MemoryAid
//
//  Created by Peng fei Xu on 2014-05-03.
//  Copyright (c) 2014 CCN Technology. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ItemDto : NSObject

@property (strong, nonatomic) NSDate *timeStamp;
@property (strong, nonatomic) NSString *uuid;
@property (strong, nonatomic) NSString *name;
@property (strong, nonatomic) NSString *parentuuid;
@property (strong, nonatomic) NSString *desc;

- (id)init;
@end
