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
@interface LRRepositoryService_v62 : LRBaseService

- (NSDictionary *)addRepositoryWithGroupId:(long)groupId classNameId:(long)classNameId parentFolderId:(long)parentFolderId name:(NSString *)name description:(NSString *)description portletId:(NSString *)portletId typeSettingsProperties:(NSDictionary *)typeSettingsProperties serviceContext:(NSDictionary *)serviceContext error:(NSError **)error;
- (void)checkRepositoryWithRepositoryId:(long)repositoryId error:(NSError **)error;
- (void)deleteRepositoryWithRepositoryId:(long)repositoryId error:(NSError **)error;
- (NSDictionary *)getLocalRepositoryImplWithRepositoryId:(long)repositoryId error:(NSError **)error;
- (NSDictionary *)getLocalRepositoryImplWithFolderId:(long)folderId fileEntryId:(long)fileEntryId fileVersionId:(long)fileVersionId error:(NSError **)error;
- (NSDictionary *)getRepositoryWithRepositoryId:(long)repositoryId error:(NSError **)error;
- (NSDictionary *)getRepositoryImplWithRepositoryId:(long)repositoryId error:(NSError **)error;
- (NSDictionary *)getRepositoryImplWithFolderId:(long)folderId fileEntryId:(long)fileEntryId fileVersionId:(long)fileVersionId error:(NSError **)error;
- (NSArray *)getSupportedConfigurationsWithClassNameId:(long)classNameId error:(NSError **)error;
- (NSArray *)getSupportedParametersWithClassNameId:(long)classNameId configuration:(NSString *)configuration error:(NSError **)error;
- (NSDictionary *)getTypeSettingsPropertiesWithRepositoryId:(long)repositoryId error:(NSError **)error;
- (void)updateRepositoryWithRepositoryId:(long)repositoryId name:(NSString *)name description:(NSString *)description error:(NSError **)error;

@end