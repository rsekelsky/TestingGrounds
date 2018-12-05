// Copyright Rourke Sekelsky.

#include "Public/PatrolRoute.h"

TArray<AActor*> UPatrolRoute::GetPatrolPoints() const
{
	return PatrolPoints;
}
