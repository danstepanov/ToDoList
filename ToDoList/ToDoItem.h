//
//  ToDoItem.h
//  ToDoList
//
//  Created by Daniel Stepanov on 2/20/15.
//  Copyright (c) 2015 Daniel Stepanov. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL *completed;
@property (readonly) NSDate *creationDate;

@end
