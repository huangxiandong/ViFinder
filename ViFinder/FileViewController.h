//
//  FileViewController.h
//  ViFinder
//
//  Created by liuwencai on 15/5/11.
//  Copyright (c) 2015年 likaci. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <Carbon/Carbon.h>
#import <Quartz/Quartz.h>

@class FileTableView;

@interface FileViewController : NSViewController <NSTableViewDataSource, QLPreviewPanelDelegate, QLPreviewPanelDataSource>
@property (strong) IBOutlet FileTableView *fileTableView;
@property (strong) IBOutlet NSMenu *favouriteMenu;
@property (strong) IBOutlet NSButton *favouriteMenuButton;


- (void)showFavouriteMenu;


@end

