//
//  Episode.h
//  iOSLibs
//
//  Created by jeremy Templier on 17/03/12.
//  Copyright (c) 2012 particulier. All rights reserved.
//

#import <CoreData/CoreData.h>

@interface Episode : NSManagedObject 

@property (nonatomic, retain) NSString* name;
@property (nonatomic, retain) NSString* body;
@property (nonatomic, retain) NSDate* published_at;
@property (nonatomic, retain) NSString*   video_url;


@end
