//
//  ItemDto.m
//  MemoryAid
//
//  Created by Peng fei Xu on 2014-05-03.
//  Copyright (c) 2014 CCN Technology. All rights reserved.
//

#import "ItemDto.h"

@implementation ItemDto

@synthesize uuid = _uuid;
@synthesize parentuuid = _parentuuid;
@synthesize desc = _desc;
@synthesize name = _name;
@synthesize timeStamp = _timeStamp;

- (id)init
{
    self = [super init];
    if (self) {
        // Initialization code here.
    }
    
    return self;
}

@end
