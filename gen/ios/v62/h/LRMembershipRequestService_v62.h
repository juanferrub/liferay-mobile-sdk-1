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
@interface LRMembershipRequestService_v62 : LRBaseService

- (NSDictionary *)addMembershipRequestWithGroupId:(long)groupId comments:(NSString *)comments serviceContext:(NSDictionary *)serviceContext error:(NSError **)error;
- (void)deleteMembershipRequestsWithGroupId:(long)groupId statusId:(int)statusId error:(NSError **)error;
- (NSDictionary *)getMembershipRequestWithMembershipRequestId:(long)membershipRequestId error:(NSError **)error;
- (void)updateStatusWithMembershipRequestId:(long)membershipRequestId reviewComments:(NSString *)reviewComments statusId:(int)statusId serviceContext:(NSDictionary *)serviceContext error:(NSError **)error;

@end