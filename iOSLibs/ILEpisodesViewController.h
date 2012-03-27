//
//  ILEpisodesViewController.h
//  iOSLibs
//
//  Created by jeremy Templier on 15/03/12.
//  Copyright (c) 2012 particulier. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <RestKit/RestKit.h>

@interface ILEpisodesViewController : UITableViewController <RKObjectLoaderDelegate>

@property (nonatomic, retain) NSArray* episodes;
@end
