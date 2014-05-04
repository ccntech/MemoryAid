//
//  Item.h
//  MemoryAid
//
//  Created by Peng fei Xu on 2014-05-03.
//  Copyright (c) 2014 CCN Technology. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Item : NSManagedObject

@property (nonatomic, retain) NSDate * timeStamp;
@property (nonatomic, retain) NSString * uuid;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * parentuuid;
@property (nonatomic, retain) NSString * desc;

@end
