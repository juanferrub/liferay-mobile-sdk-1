/**
 * Copyright (c) 2000-2013 Liferay, Inc. All rights reserved.
 *
 * This library is free software; you can redistribute it and/or modify it under
 * the terms of the GNU Lesser General Public License as published by the Free
 * Software Foundation; either version 2.1 of the License, or (at your option)
 * any later version.
 *
 * This library is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more
 * details.
 */

#import <Foundation/Foundation.h>
#import "LRBaseService.h"

/**
 * author Bruno Farache
 */
@interface LRWikiNodeService_v62 : LRBaseService

- (NSDictionary *)addNodeWithName:(NSString *)name description:(NSString *)description serviceContext:(NSDictionary *)serviceContext error:(NSError **)error;
- (void)deleteNodeWithNodeId:(long)nodeId error:(NSError **)error;
- (NSDictionary *)getNodeWithNodeId:(long)nodeId error:(NSError **)error;
- (NSDictionary *)getNodeWithGroupId:(long)groupId name:(NSString *)name error:(NSError **)error;
- (NSArray *)getNodesWithGroupId:(long)groupId error:(NSError **)error;
- (NSArray *)getNodesWithGroupId:(long)groupId status:(int)status error:(NSError **)error;
- (NSArray *)getNodesWithGroupId:(long)groupId start:(int)start end:(int)end error:(NSError **)error;
- (NSArray *)getNodesWithGroupId:(long)groupId status:(int)status start:(int)start end:(int)end error:(NSError **)error;
- (int)getNodesCountWithGroupId:(long)groupId error:(NSError **)error;
- (int)getNodesCountWithGroupId:(long)groupId status:(int)status error:(NSError **)error;
- (NSDictionary *)moveNodeToTrashWithNodeId:(long)nodeId error:(NSError **)error;
- (void)restoreNodeFromTrashWithNodeId:(long)nodeId error:(NSError **)error;
- (void)subscribeNodeWithNodeId:(long)nodeId error:(NSError **)error;
- (void)unsubscribeNodeWithNodeId:(long)nodeId error:(NSError **)error;
- (NSDictionary *)updateNodeWithNodeId:(long)nodeId name:(NSString *)name description:(NSString *)description serviceContext:(NSDictionary *)serviceContext error:(NSError **)error;

@end