//
//  AppDelegate.h
//  CardLove
//
//  Created by MAC on 2/23/13.
//  Copyright (c) 2013 FOLY. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MainViewController.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) MainViewController *mainViewController;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
