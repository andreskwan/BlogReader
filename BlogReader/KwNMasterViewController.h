//
//  KwNMasterViewController.h
//  BlogReader
//
//  Created by Andres Kwan on 3/21/14.
//  Copyright (c) 2014 Kwan. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface KwNMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
